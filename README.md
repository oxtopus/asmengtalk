```
g++ -I eigen-eigen-bdd17ee3b1b3/ hello-eigen.cpp -DM_MAX=10 -DN_MAX=10 -o hello_eigen-10x10
g++ -I eigen-eigen-bdd17ee3b1b3/ hello-eigen.cpp -DM_MAX=100 -DN_MAX=100 -o hello_eigen-100x100
g++ -I eigen-eigen-bdd17ee3b1b3/ hello-eigen.cpp -DM_MAX=1000 -DN_MAX=1000 -o hello_eigen-1000x1000
```

To update emscripten:
```
cd emsdk_portable
./emsdk update
./emsdk install latest
./emsdk activate latest
```

Regardless, Set the current Emscripten path on Linux/Mac OS X

        source ./emsdk_env.sh

```
$ g++  -I eigen-eigen-bdd17ee3b1b3/ hello-eigen.cpp -DM_MAX=512 -DN_MAX=512 -O3 -o hello_eigen-512x512
$ em++ -I eigen-eigen-bdd17ee3b1b3/ hello-eigen.cpp -DM_MAX=512 -DN_MAX=512 -O3 -o hello_eigen-512x512.js
```
