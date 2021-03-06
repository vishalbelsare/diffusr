# diffusr <img src="https://rawgit.com/dirmeier/diffusr/master/inst/fig/diffusion.gif" align="right" width="160px"/>

[![Project Status](http://www.repostatus.org/badges/latest/inactive.svg)](http://www.repostatus.org/#inactive)
[![Build Status](https://travis-ci.org/dirmeier/diffusr.svg?branch=master)](https://travis-ci.org/dirmeier/diffusr)
[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/dirmeier/diffusr?branch=master&svg=true)](https://ci.appveyor.com/project/dirmeier/diffusr)
[![codecov](https://codecov.io/gh/dirmeier/diffusr/branch/master/graph/badge.svg)](https://codecov.io/gh/dirmeier/diffusr)
[![CRAN](http://www.r-pkg.org/badges/version/diffusr?color=brightgreen)](https://cran.r-project.org/package=diffusr)
[![Downloads](http://cranlogs.r-pkg.org/badges/grand-total/diffusr?color=brightgreen)](https://cran.r-project.org/package=diffusr)

Network diffusion algorithms in R.

## Introduction

`diffusr` implements several algorithms for network diffusion such as *Markov random walks with restarts* and *weighted neighbor classification*. Network diffusion has been studied extensively in bioinformatics, e.g. in the field of cancer gene prioritization. Network diffusion algorithms generally spread information, e.g. encoded as node weights, along the edges of a graph to other nodes. These weights can for example be interpreted as temperature, an initial amount of water, the activation of neurons in the brain, or the location of a random surfer in the internet. The information (node weights) is iteratively propagated to other nodes until a equilibrium state or stop criterion occurs.

## Installation

Install `diffusr` using:
```{r}
install.packages("diffusr")
```

Alternatively use the latest version from github:
```{r}
devtools::install_github("dirmeier/diffusr")
```

## Usage

Load the package using `library(diffusr)`. We provide a vignette for the package that can be called using: `vignette("diffusr")`.
Basically that is all you have to know.

## Author

* Simon Dirmeier <a href="simon.dirmeier@gmx.de">simon.dirmeier@gmx.de</a>
