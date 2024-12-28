################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ destructor.cpp 

CPP_DEPS += \
./src/cpp\ destructor.d 

OBJS += \
./src/cpp\ destructor.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ destructor.o: ../src/cpp\ destructor.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp destructor.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ destructor.d ./src/cpp\ destructor.o

.PHONY: clean-src

