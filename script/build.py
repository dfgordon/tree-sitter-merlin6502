'''Update the parser and build the WASM files
The Docker daemon must be running.
Rootless mode: `systemctl --user start docker.service`'''

import subprocess
import pathlib
import os

script_cmd = str(pathlib.Path.cwd() / 'script' / 'opcode_processor.py')

subprocess.run(['python',script_cmd,'--allow-lower-case','0']).check_returncode()
subprocess.run(['tree-sitter','generate']).check_returncode()
subprocess.run(['tree-sitter','test']).check_returncode()
subprocess.run(['tree-sitter','build-wasm']).check_returncode()

subprocess.run(['python',script_cmd,'--allow-lower-case','1']).check_returncode()
subprocess.run(['tree-sitter','generate']).check_returncode()
subprocess.run(['tree-sitter','test']).check_returncode()
subprocess.run(['tree-sitter','build-wasm']).check_returncode()
