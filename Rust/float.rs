fn main(){
    println!("value of 0.1 + 0.2 = {}", 0.1 + 0.2); // 0.30000000000000004
    println!("use f_32 for {}", 0.1_f32 + 0.2_f32); // 0.3 answer; most predictable
    println!("or f_16? {}", 0.1_f64 + 0.2_f64); //valid widths for float are 32 and 64; same as no
                                                //value specfied
}
