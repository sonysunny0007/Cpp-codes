################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ readfile.cpp 

CPP_DEPS += \
./src/cpp\ readfile.d 

OBJS += \
./src/cpp\ readfile.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ readfile.o: ../src/cpp\ readfile.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp readfile.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ readfile.d ./src/cpp\ readfile.o

.PHONY: clean-src

