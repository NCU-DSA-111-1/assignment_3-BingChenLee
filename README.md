# Data Structure Assignment 3

**Subject**: Arithmetic Coding VS Huffman Coding  
**Author**: 通訊二 110503518 李秉宸  
**Last Updated**: 2023.01.06

## Compile & Run

```sh
# Compile arcd_coding
cd arcd_coding
make
cd examples

# Run arcd_coding
./arcd_stream -e <input_file | tee encoding_file
./arcd_stream -d <input_file | tee decoding_file

# Compile huff_coding
cd huff_coding
make

# Run huff_coding
./huffcode -i input_file -o encoding_file -c
./huffcode -i input_file -o decoding_file -d
```

## Usage
```sh
# Origin "test" content
The system should not require more than a few days of supervision to learn. It should be usable on modestly priced computer systems. Most of all, it should be simple and convenient for the users. The current system is not meeting business objectives because they are not able to tracks the servicing of the vehicles at Huffman Trucking.

# With arcd_coding encode
T*�5H���������c���i9�N·,*��ih������E�S�̬���Y�]
�����&����T7Ǧ\�
               $4Ġ�d即��ʕEr�x&�nGx[���EWMsȲy[jGwmFZ6�Ͷ����/-�K+m�����;�$�H������S�����-~#��V��c��p��t��8z���\�J�$���b�1a]�z��kX"9��HT?���>���n

Coding time: 0.000061 s

# With arcd_coding decode
The system should not require more than a few days of supervision to learn. It should be usable on modestly priced computer systems. Most of all, it should be simple and convenient for the users. The current system is not meeting business objectives because they are not able to tracks the servicing of the vehicles at Huffman Trucking.

Coding time: 0.000047 s

# With huff_coding encode
Coding time: 0.000066 s

# With huff_coding decode
Coding time: 0.000029 s

```

## Reference
**[1] Arithmetic Coding**
> GitHub - wonder-mice/arcd: Simple arithmetic coding library in C

**[2] Huffman Coding**
> GitHub - drichardson/huffman: huffman encoder/decoder
