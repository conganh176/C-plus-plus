.PHONY: clean All

All:
	@echo "----------Building project:[ 9-Pointers - Debug ]----------"
	@cd "9-Pointers" && "$(MAKE)" -f  "9-Pointers.mk"
clean:
	@echo "----------Cleaning project:[ 9-Pointers - Debug ]----------"
	@cd "9-Pointers" && "$(MAKE)" -f  "9-Pointers.mk" clean
