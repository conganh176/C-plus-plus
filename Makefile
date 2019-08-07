.PHONY: clean All

All:
	@echo "----------Building project:[ 3-VarConst - Debug ]----------"
	@cd "3-VarConst" && "$(MAKE)" -f  "3-VarConst.mk"
clean:
	@echo "----------Cleaning project:[ 3-VarConst - Debug ]----------"
	@cd "3-VarConst" && "$(MAKE)" -f  "3-VarConst.mk" clean
