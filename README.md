# Introduction to Julia tutorial at SciPy 2014

This tutorial was created by [David P. Sanders](http://sistemas.fciencias.unam.mx/~dsanders/), who gave it at the conference
[SciPy 2014](https://conference.scipy.org/scipy2014/). Video recordings are 
available: [part 1](http://www.youtube.com/watch?v=vWkgEddb4-A) and 
[part 2](http://www.youtube.com/watch?v=I3JH5Bg46yU).

The tutorial consists of a sequence of IJulia notebooks, i.e., IPython [now [Jupyter](http://jupyter.org/)] notebooks, using the IJulia profile. 
To follow the tutorial you need to have installed the [IPython Notebook](Install IPython Notebook.md)
and the [Julia language](Install Julia.md), together with several 
[Julia packages](Install Julia Packages.md). It is best to install them in that order.

**The version given at the Scipy 2014 conference (as recorded on the corresponding SciPy YouTube video) is v1.0; this can be obtained with `git checkout v1.0`.  It has since been reformatted for ease of use.**

**Note that some parts of this tutorial are out of date. See my Invitation to Julia and Intermediate Julia tutorials**.

**Corrections should be sent as Pull Requests to this repository.**



## Getting started 
Invoke IJulia using the following command from a terminal; a window will open in your web browser:
 
```Shell
ipython notebook --profile julia
```

Then start the tutorial in IPython Notebook from the [index](Index.ipynb). 

If you do not have IPython Notebook at hand you can view the tutorial online on
[NbViewer](http://nbviewer.ipython.org/github/dpsanders/scipy_2014_julia/blob/master/Index.ipynb).

Note that Julia can instead be started from the command line by typing `julia` or by double clicking on its icon. `quit()`  or `Ctrl-D` ends the Julia session.  

---
Financial support is acknowledged from UNAM grants DGAPA-PAPIME PE-105911 and PE
-107114 and DGAPA-PAPIIT IN-117214, as well as the SciPy 2014 conference.

Thanks to Robert Nuske for help with installation instructions and this README.




