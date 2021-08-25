
//Converts 1 to 1000 to binary, hex, octal
fn main() {
    for j in 0..1000+1 {
        println!("The decimal equivalent is {}, it's octal is {:o}, it's hex is {:x} and binary is {:b} ", j, j, j, j);
    }
}
