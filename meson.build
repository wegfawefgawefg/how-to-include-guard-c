project('main', 'c',
    default_options: [
        'default_library=static',
        'optimization=3',
    ]
)
message('optimization level is ' + get_option('optimization'))

cc = meson.get_compiler('c')

executable('main', 
    sources: [
        'main.c',
        'a.c',
        'b.c',
    ],
    include_directories: [
    ],
    dependencies: [
    ],
)
