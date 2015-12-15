#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/src/IoTApplication.o \
	${OBJECTDIR}/src/IoTException/IoTException.o \
	${OBJECTDIR}/src/IoTException/IoTFileException.o \
	${OBJECTDIR}/src/IoTFile.o \
	${OBJECTDIR}/src/IoTFileText.o \
	${OBJECTDIR}/src/IoTLogger/IoTConsoleLogger.o \
	${OBJECTDIR}/src/IoTLogger/IoTFileLogger.o \
	${OBJECTDIR}/src/IoTLogger/IoTLogger.o \
	${OBJECTDIR}/src/IoTLogger/IoTLoggerBuilder.o \
	${OBJECTDIR}/src/IoTPtr.o \
	${OBJECTDIR}/src/fossa/fossa.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-Llib -lcutl -lodb -lodb-mysql

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kamino

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kamino: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kamino ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/src/IoTApplication.o: nbproject/Makefile-${CND_CONF}.mk src/IoTApplication.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTApplication.o src/IoTApplication.cpp

${OBJECTDIR}/src/IoTException/IoTException.o: nbproject/Makefile-${CND_CONF}.mk src/IoTException/IoTException.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/IoTException
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTException/IoTException.o src/IoTException/IoTException.cpp

${OBJECTDIR}/src/IoTException/IoTFileException.o: nbproject/Makefile-${CND_CONF}.mk src/IoTException/IoTFileException.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/IoTException
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTException/IoTFileException.o src/IoTException/IoTFileException.cpp

${OBJECTDIR}/src/IoTFile.o: nbproject/Makefile-${CND_CONF}.mk src/IoTFile.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTFile.o src/IoTFile.cpp

${OBJECTDIR}/src/IoTFileText.o: nbproject/Makefile-${CND_CONF}.mk src/IoTFileText.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTFileText.o src/IoTFileText.cpp

${OBJECTDIR}/src/IoTLogger/IoTConsoleLogger.o: nbproject/Makefile-${CND_CONF}.mk src/IoTLogger/IoTConsoleLogger.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/IoTLogger
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTLogger/IoTConsoleLogger.o src/IoTLogger/IoTConsoleLogger.cpp

${OBJECTDIR}/src/IoTLogger/IoTFileLogger.o: nbproject/Makefile-${CND_CONF}.mk src/IoTLogger/IoTFileLogger.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/IoTLogger
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTLogger/IoTFileLogger.o src/IoTLogger/IoTFileLogger.cpp

${OBJECTDIR}/src/IoTLogger/IoTLogger.o: nbproject/Makefile-${CND_CONF}.mk src/IoTLogger/IoTLogger.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/IoTLogger
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTLogger/IoTLogger.o src/IoTLogger/IoTLogger.cpp

${OBJECTDIR}/src/IoTLogger/IoTLoggerBuilder.o: nbproject/Makefile-${CND_CONF}.mk src/IoTLogger/IoTLoggerBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/IoTLogger
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTLogger/IoTLoggerBuilder.o src/IoTLogger/IoTLoggerBuilder.cpp

${OBJECTDIR}/src/IoTPtr.o: nbproject/Makefile-${CND_CONF}.mk src/IoTPtr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../libodb-mysql-2.4.0/odb -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/IoTPtr.o src/IoTPtr.cpp

${OBJECTDIR}/src/fossa/fossa.o: nbproject/Makefile-${CND_CONF}.mk src/fossa/fossa.c 
	${MKDIR} -p ${OBJECTDIR}/src/fossa
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/fossa/fossa.o src/fossa/fossa.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kamino

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
