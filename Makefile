.PHONY: clean All

All:
	@echo "----------Building project:[ 7-Strings - Debug ]----------"
	@cd "7-Strings" && "$(MAKE)" -f  "7-Strings.mk"
clean:
	@echo "----------Cleaning project:[ 7-Strings - Debug ]----------"
	@cd "7-Strings" && "$(MAKE)" -f  "7-Strings.mk" clean
