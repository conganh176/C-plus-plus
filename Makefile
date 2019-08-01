.PHONY: clean All

All:
	@echo "----------Building project:[ 1-HelloWorld - Debug ]----------"
	@cd "1-HelloWorld" && "$(MAKE)" -f  "1-HelloWorld.mk"
clean:
	@echo "----------Cleaning project:[ 1-HelloWorld - Debug ]----------"
	@cd "1-HelloWorld" && "$(MAKE)" -f  "1-HelloWorld.mk" clean
