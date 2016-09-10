/* Define ALIASNAME as a weak alias for NAME.
   If weak aliases are not available, this defines a strong alias.  */
# define weak_alias(name, aliasname) _weak_alias (name, aliasname)
# define _weak_alias(name, aliasname) \
  extern __typeof (name) aliasname __attribute__ ((weak, alias (#name)));

# define __attribute_pure__ __attribute__ ((__pure__))

#  define __hidden_proto_hiddenattr(attrs...) \
  __attribute__ ((visibility ("hidden"), ##attrs))

#  define __hidden_asmname(name) \
  __hidden_asmname1 (__USER_LABEL_PREFIX__, name)

#  define __hidden_asmname1(prefix, name) __hidden_asmname2(prefix, name)
#  define __hidden_asmname2(prefix, name) #prefix name

#  define __hidden_proto(name, thread, internal, attrs...)	     \
  extern thread __typeof (name) name __asm__ (__hidden_asmname (#internal)) \
  __hidden_proto_hiddenattr (attrs);

#  define hidden_proto(name, attrs...) \
  __hidden_proto (name, , __GI_##name, ##attrs)

# define libc_hidden_proto(name, attrs...) hidden_proto (name, ##attrs)

#  define __hidden_ver1(local, internal, name) \
  extern __typeof (name) __EI_##name __asm__(__hidden_asmname (#internal)); \
  extern __typeof (name) __EI_##name \
	__attribute__((alias (__hidden_asmname (#local))))

#  define hidden_def(name)		__hidden_ver1(__GI_##name, name, name);

# define libc_hidden_def(name) hidden_def (name)

extern int __strverscmp (const char *__s1, const char *__s2)
     __attribute_pure__;
libc_hidden_proto (__strverscmp)
