# makefile-header-file-trigger
makefile-header-file-trigger is simple demo of build system that modification fo header file can trigger re-build

# Build
```shell
cd library
make GPU_ARCH=-arch=60
```
or default building for sm_70

```shell
cd library/
make
```
# Setup evn
```shell
cd libray/
. ./set_env.source
```
