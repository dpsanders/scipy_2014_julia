# IJulia

## IPython Notebook
The tutorial makes heavy use of the [IPython Notebook](http://ipython.org/notebook.html) using the 
[IJulia](https://github.com/JuliaLang/IJulia.jl) profile. IJulia requires IPython 1.0 or later. 
Thus, please make sure that the latest version of IPython is installed, including the IPython Notebook. 

[Installing IPython](http://ipython.org/install.html) and related scientific-Python packages 
differs by operating system and your want of control. On recent Linux distributions (e.g. ubuntu 14.04)
a sufficient `ipython-notebook` will be available through the package manager. On Mac and Windows the 
simplest way to install is by [downloading the Anaconda package](http://continuum.io/downloads) and 
running its installer. (Do *not* use Enthought Canopy/EPD.)

**Important**: on Windows, the Anaconda installer window gives options *Add Anaconda to the System Path* and also *Register Anaconda as default Python version of the system*.  Be sure to **check these boxes**.

If you already have Python installed and are familiar with installing packages, you can get a brand-new
IPython Notebook with pip:

```Shell
pip install ipython[notebook] --upgrade
```

For more details and hints for troubleshooting have a look at [Julia at MIT](https://github.com/stevengj/julia-mit/blob/master/README.md#installing-julia-and-ijulia)


## Running Julia in the IJulia Notebook
Assuming IPython Notebook (>= 1.0), Julia (>= 0.2) and the Julia Package IJulia are installed and working, 
open up the command line and type:

```Shell
ipython notebook --profile julia
```

For less typing (on Mac and Linux) it's handy to create an alias in .bash_profile (Mac) or .bashrc (Linux):
```Shell
alias ijulia="ipython notebook --profile julia"
```

More details can be found at [Julia at MIT](https://github.com/stevengj/julia-mit/blob/master/README.md#running-julia-in-the-ijulia-notebook).
