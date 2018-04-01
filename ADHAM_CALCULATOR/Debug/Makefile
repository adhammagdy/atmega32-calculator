################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../Applications/Calculator \
../Drivers \
../Drivers/inc \
../Drivers/src \
../Applications


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Applications/Calculator/calculator.c \
../Applications/Calculator/operations.c \
../Applications/Calculator/queue.c \
../Applications/Calculator/stringparser.c \
../Drivers/src/keypad.c \
../Drivers/src/LCD.c \
../main.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Applications/Calculator/calculator.o \
Applications/Calculator/operations.o \
Applications/Calculator/queue.o \
Applications/Calculator/stringparser.o \
Drivers/src/keypad.o \
Drivers/src/LCD.o \
main.o

OBJS_AS_ARGS +=  \
Applications/Calculator/calculator.o \
Applications/Calculator/operations.o \
Applications/Calculator/queue.o \
Applications/Calculator/stringparser.o \
Drivers/src/keypad.o \
Drivers/src/LCD.o \
main.o

C_DEPS +=  \
Applications/Calculator/calculator.d \
Applications/Calculator/operations.d \
Applications/Calculator/queue.d \
Applications/Calculator/stringparser.d \
Drivers/src/keypad.d \
Drivers/src/LCD.d \
main.d

C_DEPS_AS_ARGS +=  \
Applications/Calculator/calculator.d \
Applications/Calculator/operations.d \
Applications/Calculator/queue.d \
Applications/Calculator/stringparser.d \
Drivers/src/keypad.d \
Drivers/src/LCD.d \
main.d

OUTPUT_FILE_PATH +=ADHAM_CALCULATOR.elf

OUTPUT_FILE_PATH_AS_ARGS +=ADHAM_CALCULATOR.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler















Applications/Calculator/%.o: ../Applications/Calculator/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\include" -I"../Drivers/inc" -I"../Applications" -I"../Tools"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

Drivers/src/%.o: ../Drivers/src/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\include" -I"../Drivers/inc" -I"../Applications" -I"../Tools"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\include" -I"../Drivers/inc" -I"../Applications" -I"../Tools"  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega32a -B "D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega32a" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="ADHAM_CALCULATOR.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega32a -B "D:\Others\Program Files\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.2.150\gcc\dev\atmega32a"  
	@echo Finished building target: $@
	"D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "ADHAM_CALCULATOR.elf" "ADHAM_CALCULATOR.hex"
	"D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "ADHAM_CALCULATOR.elf" "ADHAM_CALCULATOR.eep" || exit 0
	"D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "ADHAM_CALCULATOR.elf" > "ADHAM_CALCULATOR.lss"
	"D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "ADHAM_CALCULATOR.elf" "ADHAM_CALCULATOR.srec"
	"D:\Others\Program Files\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "ADHAM_CALCULATOR.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "ADHAM_CALCULATOR.elf" "ADHAM_CALCULATOR.a" "ADHAM_CALCULATOR.hex" "ADHAM_CALCULATOR.lss" "ADHAM_CALCULATOR.eep" "ADHAM_CALCULATOR.map" "ADHAM_CALCULATOR.srec" "ADHAM_CALCULATOR.usersignatures"
	