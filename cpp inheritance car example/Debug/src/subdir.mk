################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ inheritance\ car\ example.cpp 

CPP_DEPS += \
./src/cpp\ inheritance\ car\ example.d 

OBJS += \
./src/cpp\ inheritance\ car\ example.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ inheritance\ car\ example.o: ../src/cpp\ inheritance\ car\ example.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp inheritance car example.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ inheritance\ car\ example.d ./src/cpp\ inheritance\ car\ example.o

.PHONY: clean-src

