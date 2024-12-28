################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ selftest.cpp 

CPP_DEPS += \
./src/cpp\ selftest.d 

OBJS += \
./src/cpp\ selftest.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ selftest.o: ../src/cpp\ selftest.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp selftest.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ selftest.d ./src/cpp\ selftest.o

.PHONY: clean-src

