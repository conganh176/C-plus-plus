.PHONY: clean All

All:
	@echo "----------Building project:[ 8-Function - Debug ]----------"
	@cd "8-Function" && "$(MAKE)" -f  "8-Function.mk"
clean:
	@echo "----------Cleaning project:[ 8-Function - Debug ]----------"
	@cd "8-Function" && "$(MAKE)" -f  "8-Function.mk" clean
