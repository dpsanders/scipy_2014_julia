# Install Julia Packages

Julia has a built-in package manager for installing add-on functionality written
in Julia. There is already an impressive collection of packages. The list of 
registered Julia packages can be found at http://pkg.julialang.org.

Run Julia from the command line by typing `julia` and install the following
packages:

```Julia
Pkg.update()
Pkg.add("PyPlot")
Pkg.add("Gadfly")
Pkg.add("IJulia")
```

In Julia `Pkg.status()` prints a summary of the state of your local packages. 
The list of installed packages is provided by `Pkg.installed()`. `Pkg.update()` 
updates the installed packages and `Pkg.rm()` removes unwanted packages.  


# Test Julia and the installed packages

Make the following shell script with the name `check-julia.sh`:

```Shell
julia -e 'println("Hello, world!");
println("3 + 4 = ", 3 + 4);
using PyPlot;
plot(rand(10), rand(10), "-o");
savefig("test.pdf")'
---

Make it executable and execute it: 
```Shell
chmod +x check-julia.sh
./check-julia.sh
```

This should print "Hello, world! 3 +4 = 7" and create a PDF called 'test.pdf' 
with a plot consisting of a few random points joined by lines.

