.PHONY: clean All

All:
	@echo "----------Building project:[ 2-InputOutput - Debug ]----------"
	@cd "2-InputOutput" && "$(MAKE)" -f  "2-InputOutput.mk"
clean:
	@echo "----------Cleaning project:[ 2-InputOutput - Debug ]----------"
	@cd "2-InputOutput" && "$(MAKE)" -f  "2-InputOutput.mk" clean
