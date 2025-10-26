use std::io::{self, BufRead};
 
fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let n_line = lines.next().unwrap().unwrap();
    let n: i32 = n_line.trim().parse().unwrap();
 
    let mut free_rooms_count = 0;
    for _ in 0..n {
        let line = lines.next().unwrap().unwrap();
        let parts: Vec<i32> = line
            .split_whitespace()
            .map(|s| s.parse().unwrap())
            .collect();
 
        let p = parts[0];
        let q = parts[1];
        if q - p >= 2 {
            free_rooms_count += 1;
        }
    }
 
    println!("{}", free_rooms_count);
}