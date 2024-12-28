################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ multilevelinheritance.cpp 

CPP_DEPS += \
./src/cpp\ multilevelinheritance.d 

OBJS += \
./src/cpp\ multilevelinheritance.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ multilevelinheritance.o: ../src/cpp\ multilevelinheritance.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp multilevelinheritance.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ multilevelinheritance.d ./src/cpp\ multilevelinheritance.o

.PHONY: clean-src

