.PHONY: clean All

All:
	@echo "----------Building project:[ 5-StatementsOperators - Debug ]----------"
	@cd "5-StatementsOperators" && "$(MAKE)" -f  "5-StatementsOperators.mk"
clean:
	@echo "----------Cleaning project:[ 5-StatementsOperators - Debug ]----------"
	@cd "5-StatementsOperators" && "$(MAKE)" -f  "5-StatementsOperators.mk" clean
