.PHONY: clean All

All:
	@echo "----------Building project:[ 6-ControlFlow - Debug ]----------"
	@cd "6-ControlFlow" && "$(MAKE)" -f  "6-ControlFlow.mk"
clean:
	@echo "----------Cleaning project:[ 6-ControlFlow - Debug ]----------"
	@cd "6-ControlFlow" && "$(MAKE)" -f  "6-ControlFlow.mk" clean
