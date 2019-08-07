.PHONY: clean All

All:
	@echo "----------Building project:[ 4-ArrayVector - Debug ]----------"
	@cd "4-ArrayVector" && "$(MAKE)" -f  "4-ArrayVector.mk"
clean:
	@echo "----------Cleaning project:[ 4-ArrayVector - Debug ]----------"
	@cd "4-ArrayVector" && "$(MAKE)" -f  "4-ArrayVector.mk" clean
