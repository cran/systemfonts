% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/register_font.R
\name{register_variant}
\alias{register_variant}
\title{Register a font as a variant as an existing one}
\usage{
register_variant(
  name,
  family,
  weight = NULL,
  width = NULL,
  features = font_feature()
)
}
\arguments{
\item{name}{The new family name the variant should respond to}

\item{family}{The name of an existing font family that this is a variant of}

\item{weight}{One or two of \code{"thin"}, \code{"ultralight"}, \code{"light"}, \code{"normal"},
\code{"medium"}, \code{"semibold"}, \code{"bold"}, \code{"ultrabold"}, or \code{"heavy"}. If one is
given it sets the weight for the whole variant. If two is given the first
one defines the plain weight and the second the bold weight. If \code{NULL} then
the variants of the given family closest to \code{"normal"} and \code{"bold"} will be
chosen.}

\item{width}{One of \code{"ultracondensed"}, \code{"extracondensed"}, \code{"condensed"},
\code{"semicondensed"}, \code{"normal"}, \code{"semiexpanded"}, \code{"expanded"},
\code{"extraexpanded"}, or \code{"ultraexpanded"} giving the width of the variant. If
\code{NULL} then the width closest to \code{"normal"} will be chosen.}

\item{features}{A \code{\link{font_feature}} object describing the specific OpenType
font features to turn on for the registered font variant.}
}
\description{
This function is a wrapper around \code{\link[=register_font]{register_font()}} that allows you to easily
create variants of existing system fonts, e.g. to target different weights
and/or widths, or for attaching OpenType features to a font.
}
\section{Font matching}{
During font matching, systemfonts has to look in three different locations.
The font registry (populated by \code{\link[=register_font]{register_font()}}/\code{\link[=register_variant]{register_variant()}}), the
local fonts (populated with \code{\link[=add_fonts]{add_fonts()}}/\code{\link[=scan_local_fonts]{scan_local_fonts()}}), and the
fonts installed on the system. It does so in that order: registry > local >
installed.

The matching performed at each step also differs. The fonts in the registry
is only matched by family name. The local fonts are matched based on all the
provided parameters (family, weight, italic, etc) in a way that is local to
systemfonts, but try to emulate the system native matching. The installed
fonts are matched using the system native matching functionality on macOS and
Linux. On Windows the installed fonts are read from the system registry and
matched using the same approach as for local fonts. Matching will always find
a font no matter what you throw at it, defaulting to "sans" if nothing else
is found.
}

\examples{
# Get the default "sans" family
sans <- match_fonts("sans")$path
sans <- system_fonts()$family[system_fonts()$path == sans][1]

# Register a variant of it:
register_variant(
  "sans_ligature",
  sans,
  features = font_feature(ligatures = "discretionary")
)

registry_fonts()

# clean up
clear_registry()

}
