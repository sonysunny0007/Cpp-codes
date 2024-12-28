################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ protected\ accesssepecifier.cpp 

CPP_DEPS += \
./src/cpp\ protected\ accesssepecifier.d 

OBJS += \
./src/cpp\ protected\ accesssepecifier.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ protected\ accesssepecifier.o: ../src/cpp\ protected\ accesssepecifier.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp protected accesssepecifier.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ protected\ accesssepecifier.d ./src/cpp\ protected\ accesssepecifier.o

.PHONY: clean-src

