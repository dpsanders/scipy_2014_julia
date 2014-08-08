# Installing Julia

This tutorial is based on Julia version >= 0.3.0-prerelease. The easiest
way to install a recent version on Mac and Windows is to download
the relevant installer from the respective section (at the moment 
Release candidate 0.3.0-rc2) of [Julia Downloads](http://julialang.org/downloads/).

Packages for ubuntu are available from the PPA [staticfloat/julianightlies](https://launchpad.net/~staticfloat/+archive/ubuntu/julianightlies)
which depends on the PPA [staticfloat/julia-deps](https://launchpad.net/~staticfloat/+archive/ubuntu/julia-deps).
Add those two PPAs to your sources.list and install a brand-new Julia 
using the package manager.

Please make sure you are installing a Version 0.3.0-rc* 
(or version 0.3 if it is already out by then), **not version 0.2.1**.
The version number is also shown when you start up Julia.

If you have previously installed a earlier version of Julia, 
the best idea is to remove the .julia directory from your home directory
to have a clean install.


## Alternative: Installation from source
An alternative is to compile Julia from the [source](https://github.com/JuliaLang/julia).
This takes a while, and will need various development tools installed 
(git, gcc, g++, gfortran, m4).


Download the source, change into the julia directory just created 
and build julia with make:

```Shell
git clone https://github.com/JuliaLang/julia.git
cd julia 
make 
```

or to build with 4 threads in parallel (or the correct number for your multicore machine).

```Shell
make -j 4  
```

This may result in compilation errors that can be solved by using
the normal `make` instead of the multicore version for the relevant section.

If you have compilation errors related to LAPACK, read the instructions
that will be shown during compilation for possible alternative compilation
settings to try.
