# Document the code using Doxygen
PROJECT_DOXY_FILE = Doxyfile

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


doc: $(PROJECT_DOXY_FILE)
	doxygen $^

clean:
	$(RM) html\*
	$(RM) html\search\*
	rmdir html\search
	rmdir html

