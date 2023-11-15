# Nom de l'exécutable à générer
TARGET = maths

# Répertoire source
SRC_DIR = src

# Répertoire de construction pour les fichiers objets
BUILD_DIR = build

# Liste des fichiers source
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# Liste des fichiers objets générés à partir des fichiers source
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_FILES))

# Compilateur et options de compilation
CC = gcc
CFLAGS = -Wall -ansi -pedantic

# Commande pour l'édition des liens
LD = gcc

# Règle par défaut : générer l'exécutable
all	:	$(TARGET)

# Règle pour l'exécutable final
$(TARGET)	:$(OBJ_FILES)
	$(LD) -o $@ $^

# Règle générique pour la compilation des fichiers source en fichiers objets
$(BUILD_DIR)/%.o	:	$(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Crée le répertoire de build s'il n'existe pas
$(BUILD_DIR)	:
	mkdir -p $(BUILD_DIR)

# Nettoie les fichiers objets et l'exécutable
clean	:
	rm -f $(BUILD_DIR)/*.o $(TARGET)
