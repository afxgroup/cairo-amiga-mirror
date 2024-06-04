configure with:

```meson setup --cross-file meson-amiga.txt --prefix=/usr/ppc-amigaos/SDK/local/newlib -Dfontconfig=disabled -Ddwrite=disabled -Dfreetype=enabled -Dglib=disabled -Dspectre=disabled -Dxcb=disabled -Damigaos=enabled -Dxlib=disabled -Dfontconfig=enabled -Dtests=disabled build```

then go into `build` dir and execute `ninja`