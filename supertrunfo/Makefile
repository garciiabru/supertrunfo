# Makefile para Super Trunfo
# Desenvolvido por Bruna Garcia - Estácio

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGET = supertrunfo
SOURCE = src/supertrunfo.c

# Compilação padrão
all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

# Compilação com otimização
release: CFLAGS += -O2
release: $(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) $(TARGET).exe *.o

# Execução
run: $(TARGET)
	./$(TARGET)

# Ajuda
help:
	@echo "Comandos disponíveis:"
	@echo "  make          - Compila o programa"
	@echo "  make release  - Compila com otimização"
	@echo "  make run      - Compila e executa"
	@echo "  make clean    - Remove arquivos compilados"
	@echo "  make help     - Mostra esta ajuda"

.PHONY: all release clean run help
