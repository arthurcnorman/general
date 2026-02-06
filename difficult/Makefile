# Computing Made Difficult

# I have not put in rules to deal with bibliography and index here.

chapters =	intro.tex \
		watt.tex \
		casestudy.tex \
		counters.tex \
		turing.tex \
		lambda.tex \
		primrecurse.tex \
		quadratic.tex \
		turtle.tex \
		modpi.tex \
		ingenious.tex \
		pattern.tex \
		endpart.tex


full.pdf:	full.tex full.bib full.ind \
		$(chapters)
	pdflatex full


# The target might be say 80000 words. As of 9 Jan 2026 things stand at
# around 11000 which is maybe at the 13% level.

count:
	wc full.tex $(chapters)

# end of Makefile
