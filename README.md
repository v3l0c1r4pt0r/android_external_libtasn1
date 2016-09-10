android_external_libtasn1
===

This repository tries to provide working port of libtasn1 library to Android
platform. It was tested with official NDK's toolchain distribution.

Compilation
---

At first recreate autotools scripts with:
```
autoreconf --install
```

Then build with:
```
./configure --host=arm-linux --disable-doc
make
make install
```

Patches
---

This port actually differs from mainline libtasn1 by adding strverscmp function
implementation borrowed from glibc. Therefore it should be pretty easy to merge
it with official repo at git://git.savannah.gnu.org/libtasn1.git in future.
