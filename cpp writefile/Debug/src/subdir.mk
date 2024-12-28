################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ writefile.cpp 

CPP_DEPS += \
./src/cpp\ writefile.d 

OBJS += \
./src/cpp\ writefile.o 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ writefile.o: ../src/cpp\ writefile.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp writefile.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/cpp\ writefile.d ./src/cpp\ writefile.o

.PHONY: clean-src

