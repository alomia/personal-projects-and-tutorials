#!/usr/bin/python3
usuarios = {
        'daniel_07': {
                'nombre': 'daniel',
                'apellido': 'rodriguez',
                'ubicacion': 'ciudad de mexico',
        },

        'carmeng22': {
                'nombre': 'carmen',
                'apellido': 'giraldo',
                'ubicacion': 'medellin',
        }
}

for nombre_usuario, informacion_usuario in usuarios.items():
        print(f"\nNombre de Usuario: {nombre_usuario}")
        nombre_completo = f"{informacion_usuario['nombre']} {informacion_usuario['apellido']}"
        ubicacion = informacion_usuario['ubicacion']
        
        print(f"\tNombre completo: {nombre_completo.title()}")
        print(f"\tUbicacion: {ubicacion.title()}")