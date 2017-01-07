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
CND_PLATFORM=Cygwin_1-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob10_MilesPerGallon.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob13_CircuitBoardPrice.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob14_PersonalInfo.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob1_SumOf2Numbers.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob3_SalesTax.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob4_RestaurantBill.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob6_AnnualPay.o \
	${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob8_TotalPurchase.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/assignment_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/assignment_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/assignment_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob10_MilesPerGallon.o: Gaddis_8thEd_Chap2_Prob10_MilesPerGallon.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob10_MilesPerGallon.o Gaddis_8thEd_Chap2_Prob10_MilesPerGallon.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob13_CircuitBoardPrice.o: Gaddis_8thEd_Chap2_Prob13_CircuitBoardPrice.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob13_CircuitBoardPrice.o Gaddis_8thEd_Chap2_Prob13_CircuitBoardPrice.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob14_PersonalInfo.o: Gaddis_8thEd_Chap2_Prob14_PersonalInfo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob14_PersonalInfo.o Gaddis_8thEd_Chap2_Prob14_PersonalInfo.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob1_SumOf2Numbers.o: Gaddis_8thEd_Chap2_Prob1_SumOf2Numbers.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob1_SumOf2Numbers.o Gaddis_8thEd_Chap2_Prob1_SumOf2Numbers.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob3_SalesTax.o: Gaddis_8thEd_Chap2_Prob3_SalesTax.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob3_SalesTax.o Gaddis_8thEd_Chap2_Prob3_SalesTax.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob4_RestaurantBill.o: Gaddis_8thEd_Chap2_Prob4_RestaurantBill.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob4_RestaurantBill.o Gaddis_8thEd_Chap2_Prob4_RestaurantBill.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob6_AnnualPay.o: Gaddis_8thEd_Chap2_Prob6_AnnualPay.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob6_AnnualPay.o Gaddis_8thEd_Chap2_Prob6_AnnualPay.cpp

${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob8_TotalPurchase.o: Gaddis_8thEd_Chap2_Prob8_TotalPurchase.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis_8thEd_Chap2_Prob8_TotalPurchase.o Gaddis_8thEd_Chap2_Prob8_TotalPurchase.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
