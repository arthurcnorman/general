# Computing Made Difficult

# I have not put in rules to deal with bibliography and index here.


# I will remake this even if it is already present and seemingly up to date
.PHONY:	full.pdf
full.pdf:
	pdflatex full
	bibtex full
	pdflatex full

.PHONY:	count
count:
	wc *.tex

# end of Makefile
