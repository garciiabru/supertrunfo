# 📚 Guia de Compilação - Super Trunfo

## 🖥️ Sistemas Operacionais Suportados

### Linux (Ubuntu/Debian)
```bash
# Instalar GCC (se não estiver instalado)
sudo apt update
sudo apt install gcc

# Compilar
gcc src/supertrunfo.c -o supertrunfo

# Executar
./supertrunfo
```

### macOS
```bash
# GCC já vem instalado com Xcode Command Line Tools
# Se não tiver, instale:
xcode-select --install

# Compilar
gcc src/supertrunfo.c -o supertrunfo

# Executar
./supertrunfo
```

### Windows

#### Opção 1: MinGW-w64
1. Baixe o MinGW-w64
2. Adicione ao PATH
3. Compile:
```cmd
gcc src/supertrunfo.c -o supertrunfo.exe
supertrunfo.exe
```

#### Opção 2: Visual Studio Code + C/C++ Extension
1. Instale a extensão C/C++
2. Abra o arquivo `supertrunfo.c`
3. Use Ctrl+Shift+P → "C/C++: Run Code"

#### Opção 3: Dev-C++
1. Abra o Dev-C++
2. File → New → Project → Console Application (C)
3. Cole o código
4. Execute (F9)

## 🔧 Usando o Makefile

```bash
# Compilar
make

# Compilar com otimização
make release

# Compilar e executar
make run

# Limpar arquivos compilados
make clean

# Ver ajuda
make help
```

## ⚠️ Solução de Problemas

### Erro: "gcc: command not found"
- **Linux**: `sudo apt install gcc`
- **macOS**: `xcode-select --install`
- **Windows**: Instale MinGW-w64

### Erro de compilação
- Verifique se está na pasta correta
- Verifique se o arquivo `src/supertrunfo.c` existe
- Use `gcc --version` para verificar se o GCC está instalado

### Erro de execução no Windows
- Use `supertrunfo.exe` em vez de `./supertrunfo`
- Verifique se o arquivo foi compilado corretamente

## 📝 Flags de Compilação Recomendadas

```bash
# Básico
gcc src/supertrunfo.c -o supertrunfo

# Com warnings
gcc -Wall -Wextra src/supertrunfo.c -o supertrunfo

# Com debug
gcc -g src/supertrunfo.c -o supertrunfo

# Otimizado
gcc -O2 src/supertrunfo.c -o supertrunfo
```

## 🎯 Testando a Compilação

Após compilar, teste se funcionou:

```bash
# Verificar se o arquivo foi criado
ls -la supertrunfo

# Executar
./supertrunfo
```

Se aparecer o menu do jogo, a compilação foi bem-sucedida! 🎉
