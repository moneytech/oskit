#	from @(#)Makefile.inc	8.1 (Berkeley) 6/4/93
#	$Id: Makefile.inc,v 1.4 1997/10/15 16:15:52 bde Exp $

# regex sources
.PATH: ${.CURDIR}/../libc/regex

CFLAGS+=-DPOSIX_MISTAKE

SRCS+=	regcomp.c regerror.c regexec.c regfree.c

.if ${LIB} == "c"
MAN3+=	regex.3
MAN7+=	re_format.7

MLINKS+=regex.3 regcomp.3 regex.3 regexec.3 regex.3 regerror.3
MLINKS+=regexec.3 regfree.3
.endif
