XCC = m68k-palmos-gcc
XCFLAGS = -O2 -Wall -g -fno-builtin
XCSFLAGS = -S $(CFLAGS)

PILRC = pilrc
PILRCOPT = -q -ro

TXT2BITM = txt2bitm
OBJRES = m68k-palmos-obj-res
BUILDPRC = build-prc

PROGNAME = palmr
OBJS = $(PROGNAME).o

PILRCSRC = $(PROGNAME).rcp
ICONBMP = $(PROGNAME).pbitm

ICONTEXT = "Palmr"
APPID = TBLR

all: $(PROGNAME).prc

clean:
	rm -rf *.[oa] $(PROGNAME) *.ro *~

distclean: clean
	rm -rf $(PROGNAME).prc

$(PROGNAME).prc: $(PROGNAME) $(PROGNAME).ro
	$(BUILDPRC) $(PROGNAME).def -o $(PROGNAME).prc $(PROGNAME) $(PROGNAME).ro

$(PROGNAME).ro: PalmrRsc.h
	$(PILRC) $(PILRCOPT) $(PILRCSRC) $(PROGNAME)

# Build the program executable from the
# needed objects.
$(PROGNAME): $(OBJS)
	$(XCC) $(XCFLAGS) $(OBJS) -o $(PROGNAME)

# Build the main app .o from the source files.
$(PROGNAME).o: palmr.h palmr.c
	$(XCC) $(XCFLAGS) -c palmr.c