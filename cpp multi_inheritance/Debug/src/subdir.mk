################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ multi_inheritance.cpp 

CPP_DEPS += \
./src/cpp\ multi_inheritance.d 

OBJS += \
./src/cpp\ multi_inheritance.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ multi_inheritance.o: ../src/cpp\ multi_inheritance.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp multi_inheritance.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ multi_inheritance.d ./src/cpp\ multi_inheritance.o

.PHONY: clean-src

