#Rappels elementaires-------------------------------------------
#
#	$@ : adresse de la cible
#	$< : premiere dependance
#	$^ : liste des dependances
#	$? : liste des dependances plus recentes que la cible
#	$* : le nom du fichier sans suffixe
#
#---------------------------------------------------------------

#Notes----------------------------------------------------------
#
#	Cette version de tests fait fonctionner la compilation dans
#	des sous-repertoires.
#	Reste a la faire fonctionner de maniere recursive.
#
#---------------------------------------------------------------

#Variables generales--------------------------------------------
OSUNIX = unix
OSWIN = win
OS = $(OSWIN)
DEL =
DELDIR =
DELOPT =
DELDIROPT =
MAKEDIR =
CC = g++
MAINFILE = main
OFILE = o
SRCFILE = cpp
HEADFILE = h
EXEFILE = exe

DEBUG = yes

SRCPATH = src/
SRC = $(wildcard $(SRCPATH)*.$(SRCFILE)) $(wildcard $(SRCPATH)*/*.$(SRCFILE))
HEAD = $(wildcard $(SRCPATH)*.$(HEADFILE)) $(wildcard $(SRCPATH)*/*.$(HEADFILE))
OBJPATH = build/
OUTDIR_ROOT = build
OUTDIR = $(OUTDIR_ROOT)
OBJ = $(addprefix $(OBJPATH), $(SRC:$(SRCPATH)%.$(SRCFILE)=%.$(OFILE)))

EXEPATH = $(OBJPATH)
EXE1 = $(OBJPATH)tp-compilo.$(EXEFILE)
EXE2 =
EXECS = $(EXE1) $(EXE2)
#---------------------------------------------------------------

#Variables pour les options de compilation----------------------
W = -W
WA = -Wall
STDLIB = -std=c++11

CFLAGS =
#---------------------------------------------------------------

#Compilation conditionnelle-------------------------------------
ifeq ($(OS),$(OSWIN))
	DEL += del
	DELDIR += rd
	DELOPT += /s
	DELDIROPT += /s /q
	MAKEDIR += if not exist $(OUTDIR_ROOT) mkdir
	OUTDIR += build\states build\symbols
else ifeq ($(OS),$(OSUNIX))
	DEL += rm
	DELDIR += rmdir
	DELOPT += -rf
	DELDIROPT += -rf
	OUTDIR += build/states build/symbols
	MAKEDIR += mkdir -p
else
	echo Unknown OS
	exit 1
endif

ifeq ($(DEBUG),yes)
	CFLAGS += $(W) $(WA) $(STDLIB)
else
	CFLAGS = $(STDLIB)
endif

#---------------------------------------------------------------
	


#Variables pour les options d'edition des liens-----------------

LDFLAGS =
#---------------------------------------------------------------

#Dependances a reconstruire de maniere systematique-------------
.PHONY: clean mrproper print-%
#---------------------------------------------------------------
#Regles implicites a conserver----------------------------------
.SUFFIXES: #aucune
#---------------------------------------------------------------

#Regles de construction
all: makedir $(EXECS)
ifeq ($(DEBUG),yes)
	@echo Projet compile en mode debug
else
	@echo Projet compile en mode release
endif

$(EXE1): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)
$(EXE2):
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJPATH)$(MAINFILE).$(OFILE): $(SRCPATH)$(MAINFILE).$(SRCFILE) $(HEAD)
	$(CC) -o $@ -c $< $(CFLAGS)
$(OBJPATH)%.$(OFILE) : $(SRCPATH)%.$(SRCFILE) $(SRCPATH)%.$(HEADFILE)
	$(CC) -o $@ -c $< $(CFLAGS)

makedir:
	$(MAKEDIR) $(OUTDIR)

#Regles de nettoyage
clean:
	$(DEL) $(DELOPT) *.$(OFILE)
	
mrproper:
	$(DELDIR) $(DELDIROPT) $(OUTDIR_ROOT)


#Regles de debuggage
print-% :
	@echo $* = $($*)




