gppg=/home/vadim/bin/gppg.exe
gplex=/home/vadim/bin/gplex.exe

run:	build
	bin/Debug/CodeQL.exe 2>trace.txt

build: exe

exe: parser.cs lexer.cs
	mdtool build

parser.cs: cs2.y
	${gppg} /gplex cs2.y /conflicts

lexer.cs: cs.lex
	${gplex} /unicode /codepage:utf-8 /out:lexer.cs cs.lex 

report:
	${gppg} /gplex cs2.y /report

clean:
	rm -f lexer.cs parser.cs bin/Debug/CodeQL.exe