.PHONY: clean All

All:
	@echo "----------Building project:[ A1-PrintPyramid - Debug ]----------"
	@cd "A1-PrintPyramid" && "$(MAKE)" -f  "A1-PrintPyramid.mk"
clean:
	@echo "----------Cleaning project:[ A1-PrintPyramid - Debug ]----------"
	@cd "A1-PrintPyramid" && "$(MAKE)" -f  "A1-PrintPyramid.mk" clean
