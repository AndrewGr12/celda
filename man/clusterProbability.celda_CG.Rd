% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/celda_CG.R
\name{clusterProbability.celda_CG}
\alias{clusterProbability.celda_CG}
\title{Calculates the conditional probability of each cell belong to each cluster given all other cluster assignments}
\usage{
\method{clusterProbability}{celda_CG}(celda.mod, counts, log = FALSE, ...)
}
\arguments{
\item{celda.mod}{A model returned from the 'celda_CG' function}

\item{counts}{The original count matrix used in the model}

\item{log}{If FALSE, then the normalized conditional probabilities will be returned. If TRUE, then the unnormalized log probabilities will be returned.}

\item{...}{Other arguments}
}
\value{
A list containging a matrix for the conditional cell cluster probabilities.
}
\description{
Calculates the conditional probability of each cell belong to each cluster given all other cluster assignments
}
