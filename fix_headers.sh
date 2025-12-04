#!/bin/bash

# Script para corregir todos los headers de archivos .c en 42
# Actualiza el nombre del archivo en el header automáticamente

# Colores para output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}Corrigiendo headers de archivos .c...${NC}\n"

# Encontrar todos los archivos .c
find . -type f -name "*.c" | while read -r file; do
    # Obtener solo el nombre del archivo (sin la ruta)
    filename=$(basename "$file")
    
    # Verificar si el archivo tiene el header de 42
    if grep -q "/* ************************************************************************** */" "$file"; then
        # Crear un archivo temporal
        temp_file=$(mktemp)
        
        # Leer el archivo línea por línea
        line_num=0
        while IFS= read -r line; do
            line_num=$((line_num + 1))
            
            # Línea 4: nombre del archivo (después de "/*   ")
            if [ $line_num -eq 4 ]; then
                # Extraer espacios existentes y reemplazar el nombre
                # El formato es: /*   FILENAME.c                                       :+:      :+:    :+:   */
                spaces_after="                                       "
                echo "/*   $filename$spaces_after:+:      :+:    :+:   */" >> "$temp_file"
            else
                echo "$line" >> "$temp_file"
            fi
        done < "$file"
        
        # Reemplazar el archivo original con el corregido
        mv "$temp_file" "$file"
        
        echo -e "${GREEN}✓${NC} Corregido: $file"
    else
        echo "⊘ Sin header 42: $file"
    fi
done

echo -e "\n${BLUE}¡Hecho! Todos los headers han sido actualizados.${NC}"
echo -e "${BLUE}Recuerda hacer:${NC} git add . && git commit -m 'Fix headers' && git push"
