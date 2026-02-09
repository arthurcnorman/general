# Computing Made Difficult

# I have not put in rules to deal with bibliography and index here.

chapters =	intro.tex \
		casestudy.tex \
		counters.tex \
		turing.tex \
		galactic.tex \
		intractable.tex \
		practical.tex \
		lambda.tex \
		primrecurse.tex \
		quadratic.tex \
		turtle.tex \
		modpi.tex \
		ingenious.tex \
		pattern.tex \
		parallel.tex \
		puzzles.tex \
		floating.tex \
		formalproof.tex \
		iteration.tex \
		hardware.tex \
		networks.tex \
		AI.tex \
		oddlanguage.tex \
		undecidable.tex \
		endpart.tex


full.pdf:	full.tex full.bib full.ind \
		$(chapters)
	pdflatex full

chapters.tex:	$(chapters)
	rm -f chapters.tex
	for x in $(chapters); do printf "\input $${x%.tex}\n" >> chapters.tex; done


# The target might be say 80000 words. As of 9 Jan 2026 things stand at
# around 11000 which is maybe at the 13% level.

count:
	wc full.tex $(chapters)

# end of Makefile
