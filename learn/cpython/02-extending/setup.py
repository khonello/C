from setuptools import setup, Extension

ext = Extension(
        "module", ["test6.c"]
)

setup(
        name= "module", version= "1.0", ext_modules= [ext]
)
